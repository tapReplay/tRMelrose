Pod::Spec.new do |s|

s.name         = "tRMelrose"
s.version      = "1.0"


s.summary      = "tapReplay is a library that adds a a digital shopping experience to your tvOS Channel App."
s.homepage     = "http://www.tapreplay.com"

s.license      = "MIT"

s.author = {
"Savalas Colbert" => "savalas@tapReplay.com"
}

s.platform =  :tvos , "9.0"

s.source       = { :git => "https://github.com/tapReplay/tRMelrose.git", :tag => "1.0" }
s.vendored_frameworks = "Melrose.framework" 
s.source_files  = "tRMelrose/*","tapReplay/Melrose.framework/Headers/*.h"
s.resource  = "icon.png"
s.resources = "Melrose/*.png"

end
