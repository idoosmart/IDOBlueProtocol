#
# Be sure to run `pod lib lint IDOBlueProtocol.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IDOBlueProtocol'
  s.version          = '3.4.0'
  s.summary          = 'support for nordic realtk apollo update SDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'SDK upgrade function is only responsible for firmware upgrades. Firmware version determination and firmware download are not processed. Note the integrity of the firmware download, passing in the firmware local sandbox path during the upgrade, monitoring the upgrade progress and completion status, and error agent callbacks. The current version of the upgrade library adds the realtk and apollo platform.'

  s.homepage         = 'http://www.idoosmart.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hedongyang' => 'hedy@idoosmart.com' }
  s.source           = { :git => 'https://github.com/idoosmart/IDOBlueProtocol.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  # s.swift_version = '4.0'
  
  # 上传framewrok
  s.vendored_frameworks   = 'IDOBlueProtocol.framework'

  # 上传源文件
  # s.source_files = 'IDOBlueUpdate/Classes/**/*'
  
  # s.resource_bundles = {
  #   'IDOBlueUpdate' => ['IDOBlueUpdate/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'UIKit', 'Foundation', 'CoreBluetooth'
   s.libraries  = 'libsqlite3.0'
  # s.dependency 'AFNetworking', '~> 2.3'
  
end
