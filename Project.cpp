<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daily News</title>
    <style>
        /* --- Base & Reset Styles --- */
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            background-color: #ffffff;
            display: flex;
            justify-content: center;
            padding-top: 60px; 
            padding-bottom: 60px;
        }

        .container {
            width: 100%;
            max-width: 800px;
            display: flex;
            flex-direction: column;
            align-items: center;
            padding: 0 20px; /* Prevents text from touching edges on small screens */
        }

        /* --- Header Styles --- */
        .logo {
            font-family: "Georgia", "Times New Roman", Times, serif; 
            font-size: 85px;
            font-weight: 900;
            letter-spacing: -1.5px;
            text-align: center;
            color: #000;
            margin-bottom: 25px;
        }

        /* --- Navigation Styles --- */
        nav {
            margin-bottom: 60px;
        }

        .nav-links {
            list-style: none;
            display: flex;
            flex-wrap: wrap; /* Allows wrapping on smaller screens */
            gap: 28px;
            justify-content: center;
        }

        .nav-links li {
            font-family: "Arial", "Helvetica", sans-serif;
            font-size: 19px;
            color: #111;
            display: flex;
            align-items: center;
            cursor: pointer;
        }

        .chevron {
            display: inline-block;
            width: 14px;
            height: 14px;
            margin-left: 6px;
            margin-top: 2px;
            background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' fill='none' stroke='%23b3b3b3' stroke-width='4' stroke-linecap='round' stroke-linejoin='round'%3E%3Cpolyline points='6 9 12 15 18 9'%3E%3C/polyline%3E%3C/svg%3E");
            background-size: contain;
            background-repeat: no-repeat;
            background-position: center;
        }

        /* --- Headlines Header Section --- */
        .headlines-section {
            width: 100%;
            display: flex;
            flex-direction: column;
            align-items: center;
        }

        .headlines-title {
            font-family: "Arial", "Helvetica", sans-serif;
            font-style: italic;
            font-weight: 800;
            font-size: 34px;
            margin-bottom: 12px;
            color: #000;
            letter-spacing: 0.5px;
        }

        .headlines-divider {
            width: 400px;
            max-width: 100%;
            border: none;
            border-top: 3px solid #000;
            margin-bottom: 40px;
        }

        /* --- Articles Grid Styles --- */
        .articles-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 40px 30px;
            width: 100%;
        }

        .article {
            display: flex;
            flex-direction: column;
        }

        .article-category {
            font-family: "Arial", "Helvetica", sans-serif;
            font-size: 12px;
            font-weight: bold;
            color: #666;
            text-transform: uppercase;
            letter-spacing: 1px;
            margin-bottom: 8px;
        }

        .article-title {
            font-family: "Georgia", "Times New Roman", Times, serif;
            font-size: 24px;
            line-height: 1.2;
            margin-bottom: 12px;
            color: #000;
            cursor: pointer;
        }

        .article-title:hover {
            text-decoration: underline;
        }

        .article-snippet {
            font-family: "Arial", "Helvetica", sans-serif;
            font-size: 15px;
            line-height: 1.5;
            color: #333;
        }
    </style>
</head>
<body>

    <div class="container">
        
        <header>
            <h1 class="logo">Daily News</h1>
            <nav>
                <ul class="nav-links">
                    <li>Politics <span class="chevron"></span></li>
                    <li>Science <span class="chevron"></span></li>
                    <li>Tech <span class="chevron"></span></li>
                    <li>Entertainment <span class="chevron"></span></li>
                </ul>
            </nav>
        </header>

        <main>
            <div class="headlines-section">
                <h2 class="headlines-title">Headlines</h2>
                <hr class="headlines-divider">
            </div>

            <div class="articles-grid">
                <article class="article">
                    <span class="article-category">Politics</span>
                    <h3 class="article-title">City Council Approves New Downtown Development Initiative</h3>
                    <p class="article-snippet">In a landmark 7-2 vote, the local council has given the green light to a sweeping infrastructure project aimed at revitalizing the city's commercial district.</p>
                </article>

                <article class="article">
                    <span class="article-category">Science</span>
                    <h3 class="article-title">Researchers Discover Unprecedented Deep-Sea Coral Ecosystems</h3>
                    <p class="article-snippet">Marine biologists using advanced submersibles have documented entirely new species thriving in extreme pressure zones previously thought uninhabitable.</p>
                </article>

                <article class="article">
                    <span class="article-category">Tech</span>
                    <h3 class="article-title">Next-Generation Solid State Batteries Ready for Mass Market</h3>
                    <p class="article-snippet">A major breakthrough in battery technology promises to double the range of modern electric vehicles while drastically reducing charging times.</p>
                </article>

                <article class="article">
                    <span class="article-category">Entertainment</span>
                    <h3 class="article-title">Summer Blockbuster Breaks All-Time Opening Weekend Records</h3>
                    <p class="article-snippet">Audiences flocked to theaters in record numbers this weekend, cementing the highly anticipated sequel as a monumental cultural phenomenon.</p>
                </article>
            </div>
        </main>

    </div>

</body>
</html>
