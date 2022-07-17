//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@interface SIRINLUParser : NSObject <NSSecureCoding>
{
    int _algorithmType;	// 8 = 0x8
    int _parserIdentifier;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000041fb
@property(nonatomic) int parserIdentifier; // @synthesize parserIdentifier=_parserIdentifier;
@property(nonatomic) int algorithmType; // @synthesize algorithmType=_algorithmType;
- (id)description;	// IMP=0x000000000000430e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004294
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004203
- (id)initWithAlgorithmType:(int)arg1 parserIdentifier:(int)arg2;	// IMP=0x00000000000041b5
- (id)init;	// IMP=0x0000000000004186

@end
