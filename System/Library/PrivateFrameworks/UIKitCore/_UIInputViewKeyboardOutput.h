//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardOutput.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding>
{
    _Bool _didBeginOutput;	// 8 = 0x8
    long long _positionOffset;	// 16 = 0x10
}

+ (id)outputWithKeyboardOutput:(id)arg1;	// IMP=0x00000000009105bf
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009103b7
@property(nonatomic) _Bool didBeginOutput; // @synthesize didBeginOutput=_didBeginOutput;
@property(nonatomic) long long positionOffset; // @synthesize positionOffset=_positionOffset;
- (void)setHandwritingStrokesToDelete:(id)arg1;	// IMP=0x0000000000910661
- (void)setShortcutConversion:(id)arg1;	// IMP=0x000000000091065b
- (void)setInsertionTextAfterSelection:(id)arg1;	// IMP=0x0000000000910655
- (void)setForwardDeletionCount:(unsigned long long)arg1;	// IMP=0x000000000091064f
- (void)setTextToCommit:(id)arg1;	// IMP=0x0000000000910649
- (void)setAcceptedCandidate:(id)arg1;	// IMP=0x0000000000910643
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009104dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000091047e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000910424
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009103bf

@end
