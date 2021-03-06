//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SXComponentScrollPosition
{
    NSString *_componentIdentifier;	// 8 = 0x8
    double _relativePageOffset;	// 16 = 0x10
    double _canvasWidth;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bffae
+ (_Bool)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(_Bool)arg2;	// IMP=0x00000000000bfb58
- (void).cxx_destruct;	// IMP=0x00000000000bffeb
@property(readonly, nonatomic) double canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property(readonly, nonatomic) double relativePageOffset; // @synthesize relativePageOffset=_relativePageOffset;
@property(readonly, copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bfeec
- (id)dictionaryRepresentation;	// IMP=0x00000000000bfd9a
- (id)initWithDictionaryRepresentation:(id)arg1 exactly:(_Bool)arg2;	// IMP=0x00000000000bfc63
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bfa66
- (id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3;	// IMP=0x00000000000bf9cc

@end

