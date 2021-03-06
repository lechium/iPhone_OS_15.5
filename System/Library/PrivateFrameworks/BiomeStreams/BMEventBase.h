//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMStreamValidating-Protocol.h>

@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating>
{
    NSArray *__validators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000041d92
@property(copy, nonatomic) NSArray *_validators; // @synthesize _validators=__validators;
- (id)valueForKeyPath:(id)arg1;	// IMP=0x0000000000041b87
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000041a46
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000418d5
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041764
- (id)init;	// IMP=0x00000000000416c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

