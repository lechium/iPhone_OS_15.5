//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@interface USOSerializedUtteranceSpan : NSObject <NSSecureCoding>
{
    unsigned int _startIndex;	// 8 = 0x8
    unsigned int _endIndex;	// 12 = 0xc
    unsigned int _startUnicodeScalarIndex;	// 16 = 0x10
    unsigned int _endUnicodeScalarIndex;	// 20 = 0x14
    int _startMilliSeconds;	// 24 = 0x18
    int _endMilliSeconds;	// 28 = 0x1c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c7d77
@property(readonly) int endMilliSeconds; // @synthesize endMilliSeconds=_endMilliSeconds;
@property(readonly) int startMilliSeconds; // @synthesize startMilliSeconds=_startMilliSeconds;
@property(readonly) unsigned int endUnicodeScalarIndex; // @synthesize endUnicodeScalarIndex=_endUnicodeScalarIndex;
@property(readonly) unsigned int startUnicodeScalarIndex; // @synthesize startUnicodeScalarIndex=_startUnicodeScalarIndex;
@property(readonly) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(readonly) unsigned int startIndex; // @synthesize startIndex=_startIndex;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7f84
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7d7f
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4 startMilliSeconds:(int)arg5 endMilliSeconds:(int)arg6;	// IMP=0x00000000000c7d0f
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4;	// IMP=0x00000000000c7cf4

@end

