//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/ENSDKLogging-Protocol.h>

@class NSString;

@interface ENSessionDefaultLogger : NSObject <ENSDKLogging>
{
}

- (void)evernoteLogErrorString:(id)arg1;	// IMP=0x00000000002f26d2
- (void)evernoteLogInfoString:(id)arg1;	// IMP=0x00000000002f26bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

