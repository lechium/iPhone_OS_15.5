//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessage, NSString;

@interface _MBLLoadMessageJob : NSObject
{
    id _messageBodyLoader;	// 8 = 0x8
    MFMailMessage *_message;	// 16 = 0x10
}

+ (id)log;	// IMP=0x0020000000054dde
+ (id)signpostLog;	// IMP=0x0010000000054cb8
- (void).cxx_destruct;	// IMP=0x0020000000055667
@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (id)initForMessage:(id)arg1 forMBLMailbox:(id)arg2;	// IMP=0x00100000000555a6
- (void)run;	// IMP=0x0010000000054ebb
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
