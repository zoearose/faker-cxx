#pragma once

#include <array>
#include <string_view>

namespace faker::book
{
const auto authors = std::to_array<std::string_view>({
    "A. A. Milne",
    "Agatha Christie",
    "Alexander Pope",
    "Alexandre Dumas",
    "Alice Walker",
    "Andrew Lang",
    "Anton Pavlovich Chekhov",
    "Arthur Conan Doyle",
    "Arthur Schopenhauer",
    "Aylmer Maude",
    "Beatrix Potter",
    "Benjamin Jowett",
    "Bernard Shaw",
    "Bertrand Russell",
    "Bhagavanlal Indrajit",
    "Bram Stoker",
    "Brian Evenson",
    "C. E. Brock",
    "Charles Dickens",
    "Charles E. Derbyshire",
    "Charlotte Brontë",
    "Charlotte Perkins Gilman",
    "Clifford R. Adams",
    "Constance Garnett",
    "Dan Brown",
    "Daniel Defoe",
    "Dante Alighieri",
    "David Widger",
    "David Wyllie",
    "Dean Koontz",
    "E. M. Forster",
    "Edgar Allan Poe",
    "Edgar Rice Burroughs",
    "Elizabeth Cleghorn Gaskell",
    "Elizabeth Von Arnim",
    "F. Scott Fitzgerald",
    "Frances Hodgson Burnett",
    "Frank T. Merrill",
    "Franz Kafka",
    "Friedrich Wilhelm Nietzsche",
    "Fyodor Dostoyevsky",
    "G. K. Chesterton",
    "George Eliot",
    "George R. R. Martin",
    "George Saunders",
    "Grady Ward",
    "Gustave Doré",
    "Guy de Maupassant",
    "H. G. Wells",
    "H. P. Lovecraft",
    "Haruki Murakami",
    "Henrik Ibsen",
    "Henry David Thoreau",
    "Henry Fielding",
    "Henry James",
    "Henry Morley",
    "Herman Melville",
    "Homer",
    "Honoré de Balzac",
    "Ian McEwan",
    "Isabel Florence Hapgood",
    "J. K. Rowling",
    "J. M. Barrie",
    "Jack London",
    "Jacob Grimm",
    "Jacqueline Crooks",
    "James Joyce",
    "James Patterson",
    "Jane Austen",
    "Johann Wolfgang von Goethe",
    "John Camden Hotten",
    "John Green",
    "John Grisham",
    "John Ormsby",
    "Jonathan Franzen",
    "Jonathan Swift",
    "Joseph Conrad",
    "José Rizal",
    "Jules Verne",
    "Karl Marx",
    "Kazuo Ishiguro",
    "Khaled Hosseini",
    "L. Frank Baum",
    "L. M. Montgomery",
    "Leo Tolstoy",
    "Lewis Carroll",
    "Louisa May Alcott",
    "Louise Maude",
    "Margaret Atwood",
    "Mark Twain",
    "Mary Wollstonecraft Shelley",
    "Michael Chabon",
    "Miguel de Cervantes Saavedra",
    "Nathaniel Hawthorne",
    "Neil Gaiman",
    "Niccolò Machiavelli",
    "Oscar Levy",
    "Oscar Wilde",
    "P. G. Wodehouse",
    "Plato",
    "R. L. Stine",
    "Rachel Kushner",
    "Richard Wagner",
    "Robert E. Howard",
    "Robert Louis Stevenson",
    "Robert W. Chambers",
    "Rudyard Kipling",
    "Samuel Butler",
    "Shivaram Parashuram Bhide",
    "Sir Richard Francis Burton",
    "Stephen King",
    "Suzanne Collins",
    "T. S. Eliot",
    "T. Smollett",
    "Theodore Alois Buckley",
    "Thomas Hardy",
    "Toni Morrison",
    "Vance Packard",
    "Vatsyayana",
    "Victor Hugo",
    "W. K. Marriott",
    "Walter Scott",
    "Wilhelm Grimm",
    "William Shakespeare",
    "Zadie Smith",
});

const auto bookFormats = std::to_array<std::string_view>({
    "Audiobook",
    "Ebook",
    "Hardcover",
    "Paperback",
});

const auto bookGenres = std::to_array<std::string_view>({
    "Adventure",   "Biography",       "Business",      "Children Literature",
    "Classic",     "Comedy",          "Comic",         "Detective",
    "Drama",       "Fantasy",         "Graphic Novel", "Historical Fiction",
    "Horror",      "Memoir",          "Mystery",       "Mythology",
    "Philosophy",  "Poetry",          "Psychology",    "Religion",
    "Romance",     "Science Fiction", "Thriller",      "Western",
    "Young Adult",
});

const auto publishers = std::to_array<std::string_view>({
    "Academic Press",
    "Ace Books",
    "Addison-Wesley",
    "Adis International",
    "Airiti Press",
    "Allen Ltd",
    "Andrews McMeel Publishing",
    "Anova Books",
    "Anvil Press Poetry",
    "Applewood Books",
    "Apress",
    "Athabasca University Press",
    "Atheneum Books",
    "Atheneum Publishers",
    "Atlantic Books",
    "Atlas Press",
    "BBC Books",
    "Ballantine Books",
    "Banner of Truth Trust",
    "Bantam Books",
    "Bantam Spectra",
    "Barrie & Jenkins",
    "Basic Books",
    "Belknap Press",
    "Bella Books",
    "Bellevue Literary Press",
    "Berg Publishers",
    "Berkley Books",
    "Bison Books",
    "Black Dog Publishing",
    "Black Library",
    "Black Sparrow Books",
    "Blackie and Son Limited",
    "Blackstaff Press",
    "Blackwell Publishing",
    "Bloodaxe Books",
    "Bloomsbury Publishing Plc",
    "Blue Ribbon Books",
    "Book League of America",
    "Book Works",
    "Booktrope",
    "Borgo Press",
    "Bowes & Bowes",
    "Boydell & Brewer",
    "Breslov Research Institute",
    "Brill",
    "Brill Publishers",
    "Brimstone Press",
    "Broadview Press",
    "Burns & Oates",
    "Butterworth-Heinemann",
    "Caister Academic Press",
    "Cambridge University Press",
    "Candlewick Press",
    "Canongate Books",
    "Carcanet Press",
    "Carlton Books",
    "Carlton Publishing Group",
    "Carnegie Mellon University Press",
    "Casemate Publishers",
    "Cengage Learning",
    "Central European University Press",
    "Chambers Harrap",
    "Charles Scribner's Sons",
    "Charles Scribner's Sons",
    "Chatto and Windus",
    "Chick Publications",
    "Chronicle Books",
    "Churchill Livingstone",
    "Cisco Press",
    "City Lights Publishers",
    "Cloverdale Corporation",
    "D. Appleton & Company",
    "D. Reidel",
    "DAW Books",
    "Da Capo Press",
    "Daedalus Publishing",
    "Dalkey Archive Press",
    "Darakwon Press",
    "David & Charles",
    "Dedalus Books",
    "Del Rey Books",
    "E. P. Dutton",
    "ECW Press",
    "Earthscan",
    "Edupedia Publications",
    "Eel Pie Publishing",
    "Eerdmans Publishing",
    "Ellora's Cave",
    "Elsevier",
    "Emerald Group Publishing",
    "Etruscan Press",
    "FabJob",
    "Faber and Faber",
    "Fairview Press",
    "Farrar Straus & Giroux",
    "Fearless Books",
    "Felony & Mayhem Press",
    "Firebrand Books",
    "Flame Tree Publishing",
    "Focal Press",
    "G-Unit Books",
    "G. P. Putnam's Sons",
    "Gaspereau Press",
    "Gay Men's Press",
    "Gefen Publishing House",
    "George H. Doran Company",
    "George Newnes",
    "George Routledge & Sons",
    "Godwit Press",
    "Golden Cockerel Press",
    "HMSO",
    "Hachette Book Group USA",
    "Hackett Publishing Company",
    "Hamish Hamilton",
    "Happy House",
    "Harcourt Assessment",
    "Harcourt Trade Publishers",
    "Harlequin Enterprises Ltd",
    "Harper & Brothers",
    "Harper & Row",
    "HarperCollins",
    "HarperPrism",
    "HarperTrophy",
    "Harry N. Abrams Inc.",
    "Harvard University Press",
    "Harvard University Press",
    "Harvest House",
    "Harvill Press at Random House",
    "Hawthorne Books",
    "Hay House",
    "Haynes Manuals",
    "Heyday Books",
    "Hodder & Stoughton",
    "Hodder Headline",
    "Hogarth Press",
    "Holland Park Press",
    "Holt McDougal",
    "Horizon Scientific Press",
    "Ian Allan Publishing",
    "Ignatius Press",
    "Imperial War Museum",
    "Indiana University Press",
    "J. M. Dent",
    "Jaico Publishing House",
    "Jarrolds Publishing",
    "John Blake Publishing",
    "Karadi Tales",
    "Kensington Books",
    "Kessinger Publishing",
    "Kodansha",
    "Kogan Page",
    "Koren Publishers Jerusalem",
    "Ladybird Books",
    "Leaf Books",
    "Leafwood Publishers",
    "Left Book Club",
    "Legend Books",
    "Lethe Press",
    "Libertas Academica",
    "Liberty Fund",
    "Library of America",
    "Lion Hudson",
    "Macmillan Publishers",
    "Mainstream Publishing",
    "Manchester University Press",
    "Mandrake Press",
    "Mandrake of Oxford",
    "Manning Publications",
    "Manor House Publishing",
    "Mapin Publishing",
    "Marion Boyars Publishers",
    "Mark Batty Publisher",
    "Marshall Cavendish",
    "Marshall Pickering",
    "Martinus Nijhoff Publishers",
    "Mascot Books",
    "Matthias Media",
    "McClelland and Stewart",
    "McFarland & Company",
    "McGraw Hill Financial",
    "McGraw-Hill Education",
    "Medknow Publications",
    "Naiad Press",
    "Nauka",
    "NavPress",
    "New Directions Publishing",
    "New English Library",
    "New Holland Publishers",
    "New Village Press",
    "Newnes",
    "No Starch Press",
    "Nonesuch Press",
    "O'Reilly Media",
    "Oberon Books",
    "Open Court Publishing Company",
    "Open University Press",
    "Orchard Books",
    "Orion Books",
    "Packt Publishing",
    "Palgrave Macmillan",
    "Pan Books",
    "Pantheon Books at Random House",
    "Papadakis Publisher",
    "Parachute Publishing",
    "Parragon",
    "Pathfinder Press",
    "Paulist Press",
    "Pavilion Books",
    "Peace Hill Press",
    "Pecan Grove Press",
    "Pen and Sword Books",
    "Penguin Books",
    "Random House",
    "Reed Elsevier",
    "Reed Publishing",
    "SAGE Publications",
    "Salt Publishing",
    "Sams Publishing",
    "Schocken Books",
    "Scholastic Press",
    "Seagull Books",
    "Secker & Warburg",
    "Shambhala Publications",
    "Shire Books",
    "Shoemaker & Hoard Publishers",
    "Shuter & Shooter Publishers",
    "Sidgwick & Jackson",
    "Signet Books",
    "Simon & Schuster",
    "St. Martin's Press",
    "T & T Clark",
    "Tachyon Publications",
    "Tammi",
    "Target Books",
    "Tarpaulin Sky Press",
    "Tartarus Press",
    "Tate Publishing & Enterprises",
    "Taunton Press",
    "Taylor & Francis",
    "Ten Speed Press",
    "UCL Press",
    "Unfinished Monument Press",
    "United States Government Publishing Office",
    "University of Akron Press",
    "University of Alaska Press",
    "University of California Press",
    "University of Chicago Press",
    "University of Michigan Press",
    "University of Minnesota Press",
    "University of Nebraska Press",
    "Velazquez Press",
    "Verso Books",
    "Victor Gollancz Ltd",
    "Viking Press",
    "Vintage Books",
    "Vintage Books at Random House",
    "Virago Press",
    "Virgin Publishing",
    "Voyager Books",
    "Zed Books",
    "Ziff Davis Media",
    "Zondervan",
});

const auto bookSeries = std::to_array<std::string_view>({
    "A Song of Ice and Fire",
    "Anna Karenina",
    "Colonel Race",
    "Discworld",
    "Dune",
    "Harry Potter",
    "Hercule Poirot",
    "His Dark Materials",
    "Jane Austen Murder Mysteries",
    "Little Women",
    "Outlander",
    "Percy Jackson",
    "Sherlock Holmes",
    "The Arc of a Scythe",
    "The Bartimaeus Trilogy",
    "The Border Trilogy",
    "The Chronicles of Narnia",
    "The Dark Tower",
    "The Dresden Files",
    "The Eighth Life",
    "The Foundation Series",
    "The Hitchhiker's Guide to the Galaxy",
    "The Hunger Games",
    "The Infinity Cycle",
    "The Inheritance Cycle",
    "The Lord of the Rings",
    "The Maze Runner",
    "The Prison Healer",
    "The Red Rising Saga",
    "The Southern Reach",
    "The Wheel of Time",
    "Thursday Next Series",
    "Twilight",
    "War and Peace",
});

const auto titles = std::to_array<std::string_view>({
    "A Brief History of Time",
    "A Clockwork Orange",
    "A Doll's House",
    "A Modest Proposal",
    "A Room with a View",
    "A Study in Scarlet",
    "A Tale of Two Cities",
    "Adventures of Huckleberry Finn",
    "Alice's Adventures in Wonderland",
    "Anna Karenina",
    "Anne of Green Gables",
    "Beloved",
    "Beyond Good and Evil",
    "Bible",
    "Brave New World",
    "Carmilla",
    "Catch-22",
    "Cranford",
    "Crime and Punishment",
    "Dao De Jing: A Minimalist Translation",
    "David Copperfield",
    "Don Quixote",
    "Dora",
    "Dracula",
    "Emma",
    "Faust",
    "For Whom the Bell Tolls",
    "Frankenstein",
    "Freakonomics",
    "Great Expectations",
    "Grimms' Fairy Tales",
    "Hamlet",
    "Heart of Darkness",
    "Hitting the line",
    "In Search of Lost Time",
    "Invisible Man",
    "Jane Eyre",
    "Josefine Mutzenbacher",
    "Les Misérables",
    "Life of Pi",
    "Little Women",
    "Lolita",
    "Long Walk to Freedom",
    "Madame Bovary",
    "Meditations",
    "Metamorphosis",
    "Middlemarch",
    "Moby Dick",
    "Mrs. Dalloway",
    "My Bondage and My Freedom",
    "My Life",
    "Nineteen Eighty Four",
    "Notes from the Underground ",
    "On the Duty of Civil Disobedience",
    "On the Road",
    "One Hundred Years of Solitude",
    "Peter Pan",
    "Pride and Prejudice",
    "Robinson Crusoe",
    "Romeo and Juliet",
    "Ruth Fielding in Alaska",
    "Second Treatise of Government",
    "The Adventures of Sherlock Holmes",
    "The Adventures of Tom Sawyer",
    "The Art of War",
    "The Blue Castle",
    "The Brothers Karamazov",
    "The Catcher in the Rye",
    "The Count of Monte Cristo",
    "The Diary of a Young Girl",
    "The Divine Comedy",
    "The Enchanted April",
    "The Grapes of Wrath",
    "The Great Gatsby",
    "The Handmaid’s Tale",
    "The Iliad",
    "The King in Yellow",
    "The Kite Runner",
    "The Little Prince",
    "The Magic Mountain",
    "The Odyssey",
    "The Old Man and the Sea",
    "The Picture of Dorian Gray",
    "The Prince",
    "The Problems of Philosophy",
    "The Prophet",
    "The Republic",
    "The Scarlet Letter",
    "The Sound and the Fury",
    "The Stranger",
    "The Sun Also Rises",
    "The Time Machine",
    "The Trial",
    "The War of the Worlds",
    "The Wonderful Wizard of Oz",
    "The Works of Edgar Allan Poe",
    "The Yellow Wallpaper",
    "To Kill a Mockingbird",
    "Ulysses",
    "War and Peace",
    "Winnie-the-Pooh",
    "Wuthering Heights",
});

}