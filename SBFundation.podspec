Pod::Spec.new do |s|
    s.name     = 'SBFundation'
    s.version  = '0.3'
    s.license = { :type => "LGPLv3", :file => "LICENSE" }
    s.summary = "SBFundation is a very sb way to create apps! "
    s.homepage = "https://github.com/eggswift"
    s.social_media_url = "https://github.com/eggswift"
    s.author = { "egg swift" => "lihao_ios@hotmail.com" }
    s.source   = { :git => 'https://git.oschina.net/eggswift/SBFundation.git', :tag => s.version, :submodules => true }
    s.requires_arc = true

    s.platform = :ios
    s.ios.deployment_target = '8.0'
    s.framework = "Foundation"
    s.framework = "UIKit"
    s.source_files = "SBFundation/**/*.{h,m,swift}"
end
