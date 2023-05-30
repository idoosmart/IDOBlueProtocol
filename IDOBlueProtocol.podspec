#
# Be sure to run `pod lib lint IDOBlueProtocol.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IDOBlueProtocol'
  #3.40.21.08 (2023.05.30)
  s.version          = '3.40.23'
  s.summary          = 'It is suitable for iOS devices and supports IDO bracelet, realizing bluetooth connection control framework library. Based on the Bluetooth framework of iOS system, bluetooth scanning, connection, binding, control, setting, acquisition, monitoring, transmission and other functions are expanded.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'IDOBluetooth, IDOBlueProtocol and IDOBlueUpdate are suitable for iOS devices and support IDO bracelet to realize bluetooth connection control framework library. Based on the Bluetooth framework of iOS system, bluetooth scanning, connection, binding, control, setting, acquisition, monitoring, transmission and other functions are expanded. The protocol library prepared by C is used to realize the logical processing of structural data conversion and health data synchronization, which reduces the errors of bluetooth communication data and improves the speed and accuracy of Bluetooth communication. This feature-rich API is easy to use.'

  s.homepage         = 'http://www.idoosmart.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hedongyang' => 'hedy@idoosmart.com' }
  s.source           = { :git => 'https://github.com/idoosmart/IDOBlueProtocol.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  # s.swift_version = '5.0'
  
  # 上传framewrok
  s.vendored_frameworks   = 'IDOBlueProtocol.framework'

  # 上传源文件
  # s.source_files = 'IDOBlueProtocol/Classes/**/*'
  
  # s.resource_bundles = {
  #   'IDOBlueProtocol' => ['IDOBlueProtocol/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'UIKit', 'Foundation', 'CoreBluetooth', 'Security'
   s.libraries  = 'sqlite3.0'
  # s.dependency 'AFNetworking', '~> 2.3'
  
end
