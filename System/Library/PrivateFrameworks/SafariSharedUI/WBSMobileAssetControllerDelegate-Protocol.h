//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class MAAssetQuery, NSError, NSURL;
@protocol WBSMobileAssetControllerProtocol;

@protocol WBSMobileAssetControllerDelegate <NSObject>
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailRetrieve:(NSError *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailCatalogDownload:(NSError *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didFailDownload:(NSError *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didBecomeAvailable:(NSURL *)arg2;
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 didDownload:(NSURL *)arg2;

@optional
- (void)mobileAssetController:(id <WBSMobileAssetControllerProtocol>)arg1 willPerformQuery:(MAAssetQuery *)arg2;
- (_Bool)mobileAssetControllerShouldPerformScheduledUpdate:(id <WBSMobileAssetControllerProtocol>)arg1;
@end

