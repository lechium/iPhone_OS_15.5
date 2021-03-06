//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTTapServiceDelegate-Protocol.h>

@class DTTapServiceMessageSender;

@interface DTDTraceTapServiceDelegate : NSObject <DTTapServiceDelegate>
{
    DTTapServiceMessageSender *_messageSender;	// 8 = 0x8
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000066a5d
- (void).cxx_destruct;	// IMP=0x0000000000066e6d
- (void)didStop;	// IMP=0x0000000000066e67
- (id)willStartWithConfig:(id)arg1;	// IMP=0x0000000000066e1d
- (_Bool)requiresExpiredPIDCacheForConfig:(id)arg1;	// IMP=0x0000000000066e15
- (id)createConfigWithPlist:(id)arg1;	// IMP=0x0000000000066b2e
- (id)initWithMessageSender:(id)arg1;	// IMP=0x0000000000066ac3

@end

