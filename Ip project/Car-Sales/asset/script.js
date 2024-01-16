var swiper = new Swiper(".prod-slider", {
    loop: true,
    spaceBetween: 30,

    autoplay:{
        delay: 9000,
        disableOnInteraction: false,
    },
    breakpoints: {
      640: {
        slidesPerView: 1,
      },
      768: {
        slidesPerView: 2,
      },
      1024: {
        slidesPerView: 3,
      },
    },
  });