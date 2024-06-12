import React from 'react'

function Upload() {
  return (
    <div className='upload-container'>
        <h1>Upload Course</h1>
        <div className="form__group field">
        <input
          type="text"
          className="form__field"
          placeholder="Name"
          name="course-category"
          id="course-category"
          required
        />
        <label for="name" className="form__label">
          Course Category
        </label>
        </div>

        <div className="form__group field">
        <input
          type="text"
          className="form__field"
          placeholder="Name"
          name="name"
          id="name"
          required
        />
        <label for="name" className="form__label">
          User Name
        </label>
        </div>
    </div>
  )
}

export default Upload