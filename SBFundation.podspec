Pod::Spec.new do |s|
    s.name     = 'SBFundation'
    s.version  = '0.4'
    s.license = { :type => "LGPLv3", :file => "LICENSE" }
    s.summary = "SBFundation is an convenient way to build apps, please contact me <lihao_ios@hotmail.com> for more information if you want to use it! "
    s.homepage = "https://github.com/eggswift"
    s.social_media_url = "https://twitter.com/lihao_iOS"
    s.author = { "egg swift" => "lihao_ios@hotmail.com" }
    s.source   = { :git => 'https://github.com/eggswift/SBFundation.git', :tag => s.version, :submodules => true }
    s.requires_arc = true

    s.platform = :ios
    s.ios.deployment_target = '8.0'
    s.framework = "Foundation"
    s.framework = "UIKit"

    s.vendored_frameworks = "SBFundation.framework"
end
