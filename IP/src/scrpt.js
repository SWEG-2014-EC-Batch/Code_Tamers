var searchInput = document.getElementById("Input");
var displaySearchList = document.getElementsByClassName("fav-container");

// Upon keypress - function findMovies is initiated
searchInput.addEventListener("input", findMovies);

var swiper = new Swiper(".ft-slider", {
  autoplay: {
    delay: 4500,
    disableOnInteraction: false,
  },
  cssMode: true,
  navigation: {
    nextEl: ".swiper-button-next",
    prevEl: ".swiper-button-prev",
  },
  pagination: {
    el: ".swiper-pagination",
  },
  mousewheel: true,
  keyboard: true,
});

// When the user is searching for the movie then a list of the related movie will be displayed and that list is fetched
async function findMovies() {
  const url = `/custom-api/searchMovies.php?query=${searchInput.value.trim()}`;
  const res = await fetch(url);
  const data = await res.json();

  if (data.movies) {
    // Calling the function to display list of the movies related to the user search
    displayMovieList(data.movies);
  }
}

async function displayMovieList(movies) {
  var output = "";
  // Traversing over the movies list which is passed as an argument to our function
  for (let movie of movies) {
    var img = movie.poster ? movie.poster : "img/blank-poster.webp";
    var id = movie.id;

    // Appending the output through string interpolation
    output += `
      <div class="fav-item">
          <div class="fav-poster">
              <a href="/pages/movies.php?id=${id}"><img src=${img} alt="Favourites Poster"></a>
          </div>
          <div class="fav-details">
              <div class="fav-details-box">
                  <div>
                      <p class="fav-movie-name"><a href="/pages/movies.php?id=${id}">${movie.title}</a></p>
                      <p class="fav-movie-rating"><a href="/pages/movies.php?id=${id}">${movie.year}</a></p>
                  </div>
                  <div>
                      <i class="fa-solid fa-bookmark" style="cursor:pointer;" onClick=addTofavorites('${id}')></i>
                  </div>
              </div>
          </div>
      </div>
     `;
  }
  // Appending this to the movie-display class of our HTML page
  document.querySelector(".fav-container").innerHTML = output;
  console.log("Here is the movie list: ", movies);
}

document.addEventListener('DOMContentLoaded', function() {
  const userIcon = document.getElementById('userIcon');
  const profilePopup = document.getElementById('profilePopup');
  const logoutButton = document.getElementById('logoutButton');

  userIcon.addEventListener('click', function() {
      profilePopup.style.display = profilePopup.style.display === 'none' || profilePopup.style.display === '' ? 'block' : 'none';
  });

  logoutButton.addEventListener('click', function() {
      alert('Logged out!');
      profilePopup.style.display = 'none';
  });

  window.addEventListener('click', function(event) {
      if (!profilePopup.contains(event.target) && !userIcon.contains(event.target)) {
          profilePopup.style.display = 'none';
      }
  });
});
