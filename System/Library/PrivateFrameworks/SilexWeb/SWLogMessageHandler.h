//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>

@class NSString;
@protocol SWLogger;

@interface SWLogMessageHandler : NSObject <SWMessageHandler>
{
    id <SWLogger> _logger;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001480b
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;	// IMP=0x00000000000146ea
- (id)initWithLogger:(id)arg1;	// IMP=0x000000000001467f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
