//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/SYChangeSerializer-Protocol.h>

@class NSString;

@interface VCCompanionSyncSerializer : NSObject <SYChangeSerializer>
{
}

- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x0000000000040a58
- (id)dataFromChange:(id)arg1;	// IMP=0x0000000000040740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

