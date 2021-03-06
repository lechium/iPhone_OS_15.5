//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NSLengthFormatter <NSObservable, NSObserver>
{
    void *_formatter;	// 8 = 0x8
    _Bool _isForPersonHeight;	// 16 = 0x10
    void *_reserved[2];	// 24 = 0x18
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000160abd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001609cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001608c2
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;	// IMP=0x000000000016083f
- (id)stringForObjectValue:(id)arg1;	// IMP=0x00000000001607e4
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x00000000001607dc
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;	// IMP=0x000000000016071f
- (id)stringFromMeters:(double)arg1;	// IMP=0x00000000001605ec
- (id)unitStringFromMeters:(double)arg1 usedUnit:(long long *)arg2;	// IMP=0x00000000001604dc
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;	// IMP=0x000000000016041f
@property(getter=isForPersonHeightUse) _Bool forPersonHeightUse;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;	// IMP=0x0000000000160326
- (id)init;	// IMP=0x00000000001602b0
- (long long)targetUnitFromMeters:(double)arg1;	// IMP=0x0000000000160130
- (void)receiveObservedValue:(id)arg1;	// IMP=0x00000000002138b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

