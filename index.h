<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>E-Commerce Store</title>
  <link rel="stylesheet" href="style.css" />
  <link href="https://fonts.googleapis.com/css2?family=Montserrat:wght@500&family=Roboto&display=swap" rel="stylesheet" />
</head>
<body>

  <!-- Header -->
  <header class="header">
    <div class="logo">ShopMate</div>
    <nav class="nav">
      <a href="#">Home</a>
      <a href="#">Shop</a>
      <a href="#">Categories</a>
      <a href="#">Contact</a>
    </nav>
    <div class="icons">
      <span>🛒</span>
      <span>👤</span>
    </div>
  </header>

  <!-- Hero Section -->
  <section class="hero">
    <h1>Explore the Latest Trends</h1>
    <p>Shop the newest arrivals now</p>
    <button>Shop Now</button>
  </section>

  <!-- Categories -->
  <section class="categories">
    <div class="category">👕 Men</div>
    <div class="category">👗 Women</div>
    <div class="category">🎧 Electronics</div>
    <div class="category">🎒 Accessories</div>
  </section>

  <!-- Products -->
  <section class="products">
    <h2>Featured Products</h2>
    <div class="product-grid">
      <div class="product-card">
        <img src="https://via.placeholder.com/200" alt="Product 1" />
        <h3>Stylish Jacket</h3>
        <p>$49.99</p>
        <button>Add to Cart</button>
      </div>
      <div class="product-card">
        <img src="https://via.placeholder.com/200" alt="Product 2" />
        <h3>Smart Watch</h3>
        <p>$99.99</p>
        <button>Add to Cart</button>
      </div>
      <div class="product-card">
        <img src="https://via.placeholder.com/200" alt="Product 3" />
        <h3>Backpack</h3>
        <p>$29.99</p>
        <button>Add to Cart</button>
      </div>
    </div>
  </section>

  <!-- Contact -->
  <section class="contact">
    <h2>Contact Us</h2>
    <form>
      <input type="text" placeholder="Your Name" required />
      <input type="email" placeholder="Your Email" required />
      <textarea placeholder="Your Message" required></textarea>
      <button type="submit">Send Message</button>
    </form>
  </section>

  <!-- Footer -->
  <footer class="footer">
    <p>&copy; 2025 ShopMate. All rights reserved.</p>
  </footer>

</body>
</html>
