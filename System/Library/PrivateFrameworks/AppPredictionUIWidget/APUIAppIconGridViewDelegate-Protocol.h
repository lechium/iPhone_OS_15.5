//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APUIAppIconGridView, NSString, SBIcon;

@protocol APUIAppIconGridViewDelegate
- (SBIcon *)appIconGridView:(APUIAppIconGridView *)arg1 iconForApplicationWithBundleIdentifier:(NSString *)arg2;
- (_Bool)appIconGridView:(APUIAppIconGridView *)arg1 launchAppFromIcon:(SBIcon *)arg2;
- (_Bool)appIconGridView:(APUIAppIconGridView *)arg1 shouldDisplayBadgeWithBundleIdentifier:(NSString *)arg2;
@end
