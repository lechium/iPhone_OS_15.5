//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding>
{
    unsigned long long _selectionOffset;	// 8 = 0x8
    NSString *_inputString;	// 16 = 0x10
    NSAttributedString *_displayString;	// 24 = 0x18
    NSString *_searchString;	// 32 = 0x20
    long long _cursorVisibility;	// 40 = 0x28
}

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;	// IMP=0x0000000000002069
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;	// IMP=0x0000000000001fe1
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;	// IMP=0x0000000000001f5e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001f56
- (void).cxx_destruct;	// IMP=0x0000000000002ab0
@property(nonatomic) long long cursorVisibility; // @synthesize cursorVisibility=_cursorVisibility;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSAttributedString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(readonly, nonatomic) struct _NSRange selectedRange;
- (unsigned long long)hash;	// IMP=0x0000000000002908
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000025c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000024fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000235a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002298
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;	// IMP=0x0000000000002107

@end

