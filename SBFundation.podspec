Pod::Spec.new do |s|
    s.name     = 'SBFundation'
    s.version  = '0.3'
    s.license = { :type => "LGPLv3", :file => "LICENSE" }
    s.summary = "SBFundation is the most convenient way to build applications, If you want to use it in your application, please contact me <lihao_ios@hotmail.com> for more information! "
    s.homepage = "https://github.com/eggswift"
    s.social_media_url = "https://twitter.com/lihao_iOS"
    s.author = { "egg swift" => "lihao_ios@hotmail.com" }
    s.source   = { :git => 'https://github.com/eggswift/SBFundation.git', :tag => s.version, :submodules => true }
    s.requires_arc = true

    s.platform = :ios
    s.ios.deployment_target = '8.0'
    s.framework = "Foundation"
    s.framework = "UIKit"
    s.source_files = "SBFundation.framework"
end
