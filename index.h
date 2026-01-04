<!DOCTYPE html><html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Final Project – Optimized Web App</title>  <!-- Optimized CSS -->  <style>
    :root{
      --primary:#2fa4a9;
      --dark:#1e293b;
      --light:#f8fafc;
    }
    *{margin:0;padding:0;box-sizing:border-box;font-family:Arial,Helvetica,sans-serif}
    body{background:var(--light);color:var(--dark);line-height:1.6}

    header{
      background:linear-gradient(135deg,var(--primary),#3fb950);
      color:white;
      padding:1.2rem;
      text-align:center;
    }

    nav{
      display:flex;
      justify-content:center;
      gap:1.5rem;
      background:#0f172a;
      padding:0.7rem;
    }
    nav a{
      color:white;
      text-decoration:none;
      font-size:0.95rem;
    }
    nav a:hover{color:#38bdf8}

    .container{
      max-width:1100px;
      margin:auto;
      padding:1.5rem;
    }

    .grid{
      display:grid;
      grid-template-columns:repeat(auto-fit,minmax(250px,1fr));
      gap:1.2rem;
    }

    .card{
      background:white;
      padding:1.2rem;
      border-radius:12px;
      box-shadow:0 6px 20px rgba(0,0,0,0.08);
      transition:transform 0.3s ease;
    }
    .card:hover{transform:translateY(-5px)}

    .card h3{margin-bottom:0.5rem;color:var(--primary)}

    img{
      width:100%;
      border-radius:10px;
      margin-top:0.6rem;
    }

    button{
      margin-top:0.8rem;
      padding:0.6rem 1.2rem;
      border:none;
      border-radius:20px;
      background:var(--primary);
      color:white;
      cursor:pointer;
    }
    button:hover{background:#0284c7}

    footer{
      background:#0f172a;
      color:white;
      text-align:center;
      padding:1rem;
      margin-top:2rem;
      font-size:0.9rem;
    }

    /* Responsive */
    @media(max-width:600px){
      header h1{font-size:1.4rem}
    }
  </style></head>
<body><header>
  <h1>Final Project & Optimization</h1>
  <p>Responsive • Optimized • Cross‑Browser Web App</p>
</header><nav>
  <a href="#home">Home</a>
  <a href="#features">Features</a>
  <a href="#gallery">Gallery</a>
  <a href="#contact">Contact</a>
</nav><section id="home" class="container">
  <h2>Project Objective</h2>
  <p>This web application integrates HTML, CSS and JavaScript with performance optimization, mobile responsiveness and cross‑browser compatibility.</p>
</section><section id="features" class="container">
  <h2>Key Features</h2>
  <div class="grid">
    <div class="card">
      <h3>Fast Performance</h3>
      <p>Minimized CSS & JS with optimized loading.</p>
    </div>
    <div class="card">
      <h3>Responsive Design</h3>
      <p>Works perfectly on mobile, tablet and desktop.</p>
    </div>
    <div class="card">
      <h3>Cross‑Browser</h3>
      <p>Tested on Chrome, Firefox and mobile browsers.</p>
    </div>
  </div>
</section><section id="gallery" class="container">
  <h2>Lazy Loaded Gallery</h2>
  <div class="grid">
    <div class="card">
      <p>Nature View</p>
      <img loading="lazy" src="https://picsum.photos/400/250?1" alt="nature" />
    </div>
    <div class="card">
      <p>Technology</p>
      <img loading="lazy" src="https://picsum.photos/400/250?2" alt="tech" />
    </div>
    <div class="card">
      <p>Workspace</p>
      <img loading="lazy" src="https://picsum.photos/400/250?3" alt="workspace" />
    </div>
  </div>
</section><section id="contact" class="container">
  <h2>Contact Us</h2>
  <div class="card">
    <p>Click the button to see JavaScript interaction 👇</p>
    <button onclick="showMessage()">Click Me</button>
    <p id="msg"></p>
  </div>
</section><footer>
  <p>© 2026 Final Optimized Web App | ApexPlanet Task‑5</p>
</footer><!-- Optimized JavaScript --><script>
  function showMessage(){
    const msg=document.getElementById('msg');
    msg.innerHTML="Thanks for clicking! 🎉 Your web app is working perfectly.";
  }
</script></body>
</html>
