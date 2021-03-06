//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHTextCorrectionResult, NSArray, NSNumber;

@interface CHTextInputQueryItem : NSObject
{
    NSNumber *_itemIdentifier;	// 8 = 0x8
    NSNumber *_itemStableIdentifier;	// 16 = 0x10
    NSArray *_strokeIdentifiers;	// 24 = 0x18
    CHTextCorrectionResult *_correctionResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e79b0
@property(readonly, nonatomic) CHTextCorrectionResult *correctionResult; // @synthesize correctionResult=_correctionResult;
@property(readonly, copy, nonatomic) NSArray *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) NSNumber *itemStableIdentifier; // @synthesize itemStableIdentifier=_itemStableIdentifier;
@property(readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (unsigned long long)hash;	// IMP=0x00000000000e7950
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e78f0
- (_Bool)isEqualToTextInputQueryItem:(id)arg1;	// IMP=0x00000000000e7790
- (id)description;	// IMP=0x00000000000e74e0
- (id)initWithIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 correctionResult:(id)arg4;	// IMP=0x00000000000e73c0

@end

