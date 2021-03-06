//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSNotificationServiceConnection, BCSParsingServiceConnection;

@interface BCSQRCodeParser : NSObject
{
    BCSParsingServiceConnection *_parsingServiceConnection;	// 8 = 0x8
    BCSNotificationServiceConnection *_notificationServiceConnection;	// 16 = 0x10
}

+ (id)sharedParser;	// IMP=0x000000000001da29
- (void).cxx_destruct;	// IMP=0x000000000001f7cc
- (void)setPreferredBundleIdentifier:(id)arg1 forURL:(id)arg2;	// IMP=0x000000000001f74c
- (void)stopQRCodeParsingSession;	// IMP=0x000000000001f70a
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f459
- (id)_payloadForMRCObject:(id)arg1;	// IMP=0x000000000001f39b
@property(readonly, nonatomic) BCSNotificationServiceConnection *notificationServiceConnection;
- (void)_parseMetadataObject:(id)arg1 reply:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ec40
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e988
- (void)parseCodeFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e656
- (void)parseCodeFromImage:(struct CGImage *)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e174
- (id)_qrCodeFeatureFromImage:(struct CGImage *)arg1;	// IMP=0x000000000001ddf6
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001da7e

@end

