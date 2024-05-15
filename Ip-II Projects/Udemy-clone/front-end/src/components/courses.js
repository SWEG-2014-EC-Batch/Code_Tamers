import React from "react";

import { useRef, useState } from "react";
// Import Swiper React components
import { Swiper, SwiperSlide } from "swiper/react";

// Import Swiper styles
import "swiper/css";
import "swiper/css/navigation";
import "swiper/css/pagination";

// import required modules
import {
  Navigation,
  Pagination,
  Mousewheel,
  Keyboard,
  Autoplay,
} from "swiper/modules";

function Courses() {
  const p = {
    slidesPerView:3,
    spaceBetween:30,
    pagination : {
      clickable: true,
    },
  }
  return (
    <div className="mainDiv">
      <div className="content" id="div1">
        {/* <!--Later will be cahnged with the name of the selected catagory--> */}
        <h1 id="starter-h">Design Course</h1>
        <h2>Courses to get you started</h2>
        <p>Explore courses from experienced, real-world experts.</p>
        <br />
        <div className="swiper content-slider courses">
          <Swiper
            {...p}
            cssMode={true}
            navigation={true}
            pagination={true}
            mousewheel={true}
            keyboard={true}
            modules={[Navigation, Pagination, Mousewheel, Keyboard]}
            className="mySwiper"
          >
            <SwiperSlide>
              <div className="swiper-slide box course-box">
                <img src="./assets/udemy-market.jpg" />
                <h3>Tut n01</h3>
                <div className="price">10birr</div>
                <div className="stars">
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                </div>
              </div>
            </SwiperSlide>
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <h3>Tut n01</h3>
                <div className="price">10birr</div>
                <div className="stars">
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                </div>
              </div>
            </SwiperSlide>
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <h3>Tut n01</h3>
                <div className="price">10birr</div>
                <div className="stars">
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                </div>
              </div>
            </SwiperSlide>
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <h3>Tut n01</h3>
                <div className="price">10birr</div>
                <div className="stars">
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                  <span className="star">&#9733;</span>
                </div>
              </div>
            </SwiperSlide>
          </Swiper>
        </div>
      </div>

      <div className="content" id="div2">
        <h1>Featured course</h1>
        <p>
          Many learners enjoyed this highly rated course for its engaging
          content.
        </p>
        <div className="swiper ft-slider">
          <Swiper
            spaceBetween={30}
            centeredSlides={true}
            autoplay={{
              delay: 2500,
              disableOnInteraction: false,
            }}
            pagination={{
              clickable: true,
            }}
            navigation={true}
            modules={[Autoplay, Pagination, Navigation]}
            className="mySwiper"
          >
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <div className="text-wrap">
                  <h3>Unreal engine course free 99</h3>
                  <p>
                    This is a course of Lorem ipsum, dolor sit amet consectetur
                    adipisicing elit. Incidunt id ea modi deleniti distinctio
                    sit repellat quisquam iure! Accusamus adipisci eius
                    blanditiis. Asperiores, iusto. Molestias quidem fugiat ab
                    beatae odio.
                  </p>
                  <div className="price">10birr</div>
                  <div className="stars">
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                  </div>
                </div>
              </div>
            </SwiperSlide>
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <div className="text-wrap">
                  <h3>Unreal engine course free 99</h3>
                  <p>
                    This is a course of Lorem ipsum, dolor sit amet consectetur
                    adipisicing elit. Incidunt id ea modi deleniti distinctio
                    sit repellat quisquam iure! Accusamus adipisci eius
                    blanditiis. Asperiores, iusto. Molestias quidem fugiat ab
                    beatae odio.
                  </p>
                  <div className="price">10birr</div>
                  <div className="stars">
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                  </div>
                </div>
              </div>
            </SwiperSlide>
            <SwiperSlide>
              <div className="swiper-slide box">
                <img src="./assets/udemy-market.jpg" />
                <div className="text-wrap">
                  <h3>Unreal engine course free 99</h3>
                  <p>
                    This is a course of Lorem ipsum, dolor sit amet consectetur
                    adipisicing elit. Incidunt id ea modi deleniti distinctio
                    sit repellat quisquam iure! Accusamus adipisci eius
                    blanditiis. Asperiores, iusto. Molestias quidem fugiat ab
                    beatae odio.
                  </p>
                  <div className="price">10birr</div>
                  <div className="stars">
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                    <span className="star">&#9733;</span>
                  </div>
                </div>
              </div>
            </SwiperSlide>
          </Swiper>
        </div>
      </div>
        
        {/* popular content were here */}

      <div className="content" id="div5">
        {/* <!--This will be changed to the name of the category later on--> */}
        <h1>All design courses</h1>
        <div id="div5-left">
          <label for="filter" style={{ fontSize: "24px", fontWeight: "bold" }}>
            Filter:{" "}
          </label>
          <select id="filter" name="filter" style={{ fontSize: "20px" }}>
            <option value="most-popular">Most popular</option>
            <option value="highest-rated">Highest rated</option>
            <option value="Newest">Newest</option>
          </select>
        </div>

        <div id="div5-right">
          <div className="swiper-slide box">
            <img src="./assets/udemy-market.jpg" />
            <div className="text-wrap">
              <h3>Unreal engine course free 99</h3>
              <p>
                This is a course of Lorem ipsum, dolor sit amet consectetur
                adipisicing elit. Incidunt id ea modi deleniti distinctio sit
                repellat quisquam iure! Accusamus adipisci eius blanditiis.
                Asperiores, iusto. Molestias quidem fugiat ab beatae odio.
              </p>
              <div className="price">10birr</div>
              <div className="stars">
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
              </div>
            </div>
          </div>
          <div className="swiper-slide box">
            <img src="./assets/udemy-market.jpg" />
            <div className="text-wrap">
              <h3>Unreal engine course free 99</h3>
              <p>
                This is a course of Lorem ipsum, dolor sit amet consectetur
                adipisicing elit. Incidunt id ea modi deleniti distinctio sit
                repellat quisquam iure! Accusamus adipisci eius blanditiis.
                Asperiores, iusto. Molestias quidem fugiat ab beatae odio.
              </p>
              <div className="price">10birr</div>
              <div className="stars">
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
              </div>
            </div>
          </div>
          <div className="swiper-slide box">
            <img src="./assets/udemy-market.jpg" />
            <div className="text-wrap">
              <h3>Unreal engine course free 99</h3>
              <p>
                This is a course of Lorem ipsum, dolor sit amet consectetur
                adipisicing elit. Incidunt id ea modi deleniti distinctio sit
                repellat quisquam iure! Accusamus adipisci eius blanditiis.
                Asperiores, iusto. Molestias quidem fugiat ab beatae odio.
              </p>
              <div className="price">10birr</div>
              <div className="stars">
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
                <span className="star">&#9733;</span>
              </div>
            </div>
          </div>
        </div>
      </div>

    </div>
  );
}

export default Courses;
