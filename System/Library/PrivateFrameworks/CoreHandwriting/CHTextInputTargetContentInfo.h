//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSMutableCopying-Protocol.h>

@class CHTextInputTarget, NSIndexSet, NSString;

@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying>
{
    CHTextInputTarget *_textInputTarget;	// 8 = 0x8
    long long _textContentLength;	// 16 = 0x10
    NSString *_referenceSubstring;	// 24 = 0x18
    struct _NSRange _referenceSubstringRange;	// 32 = 0x20
    struct CGRect *_characterRectsInReferenceSubstring;	// 48 = 0x30
    struct _NSRange _strokeCoveredTextRange;	// 56 = 0x38
    struct _NSRange _selectedTextRange;	// 72 = 0x48
    _Bool _isCursorStrong;	// 88 = 0x58
    _Bool _containsCommittedStrokes;	// 89 = 0x59
    struct _NSRange _activePreviewRange;	// 96 = 0x60
    int _contentType;	// 112 = 0x70
    int _autoCapitalizationMode;	// 116 = 0x74
    int _autoCorrectionMode;	// 120 = 0x78
    _Bool _isSingleLine;	// 124 = 0x7c
    _Bool _supportsAutoLineBreaks;	// 125 = 0x7d
    long long _lastCharacterLevelPosition;	// 128 = 0x80
    NSIndexSet *_protectedCharacterIndexes;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000731f0
@property(readonly, copy, nonatomic) NSIndexSet *protectedCharacterIndexes; // @synthesize protectedCharacterIndexes=_protectedCharacterIndexes;
@property(readonly, nonatomic) struct CGRect *characterRectsInReferenceSubstring; // @synthesize characterRectsInReferenceSubstring=_characterRectsInReferenceSubstring;
@property(readonly, nonatomic) long long lastCharacterLevelPosition; // @synthesize lastCharacterLevelPosition=_lastCharacterLevelPosition;
@property(readonly, nonatomic) _Bool supportsAutoLineBreaks; // @synthesize supportsAutoLineBreaks=_supportsAutoLineBreaks;
@property(readonly, nonatomic) _Bool isSingleLine; // @synthesize isSingleLine=_isSingleLine;
@property(readonly, nonatomic) int autoCorrectionMode; // @synthesize autoCorrectionMode=_autoCorrectionMode;
@property(readonly, nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(readonly, nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) struct _NSRange activePreviewRange; // @synthesize activePreviewRange=_activePreviewRange;
@property(readonly, nonatomic) _Bool containsCommittedStrokes; // @synthesize containsCommittedStrokes=_containsCommittedStrokes;
@property(readonly, nonatomic) _Bool isCursorStrong; // @synthesize isCursorStrong=_isCursorStrong;
@property(readonly, nonatomic) struct _NSRange selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(readonly, nonatomic) struct _NSRange strokeCoveredTextRange; // @synthesize strokeCoveredTextRange=_strokeCoveredTextRange;
@property(readonly, nonatomic) struct _NSRange referenceSubstringRange; // @synthesize referenceSubstringRange=_referenceSubstringRange;
@property(readonly, copy, nonatomic) NSString *referenceSubstring; // @synthesize referenceSubstring=_referenceSubstring;
@property(readonly, nonatomic) long long textContentLength; // @synthesize textContentLength=_textContentLength;
@property(readonly, nonatomic) CHTextInputTarget *textInputTarget; // @synthesize textInputTarget=_textInputTarget;
- (struct CGRect)unionCharacterRects;	// IMP=0x0000000000072f40
- (struct _NSRange)referenceSubstringRangeOfComposedCharacterAtIndex:(long long)arg1;	// IMP=0x0000000000072ea0
- (id)referenceSubstringInRange:(struct _NSRange)arg1;	// IMP=0x0000000000072df0
- (void)enumerateCharacterRectsInRange:(struct _NSRange)arg1 reverse:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000072bc0
- (void)enumerateCharacterRectsInRange:(struct _NSRange)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072ba0
- (struct CGRect)visualCharacterRectForCharacterIndex:(long long)arg1;	// IMP=0x0000000000072950
- (struct CGRect)characterRectForCharacterIndex:(long long)arg1;	// IMP=0x00000000000728f0
- (long long)relativeLocationFromAbsoluteLocation:(long long)arg1;	// IMP=0x00000000000728d0
- (long long)absoluteLocationFromRelativeLocation:(long long)arg1;	// IMP=0x00000000000728b0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000072650
- (id)description;	// IMP=0x0000000000072140
- (void)dealloc;	// IMP=0x0000000000072100
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange)arg4 charRectsInReferenceSubstring:(struct CGRect *)arg5 strokeCoveredTextRange:(struct _NSRange)arg6 selectedTextRange:(struct _NSRange)arg7 activePreviewRange:(struct _NSRange)arg8 contentType:(int)arg9 lastCharacterLevelPosition:(long long)arg10;	// IMP=0x00000000000720a0
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange)arg4 charRectsInReferenceSubstring:(struct CGRect *)arg5 strokeCoveredTextRange:(struct _NSRange)arg6 selectedTextRange:(struct _NSRange)arg7 isCursorStrong:(_Bool)arg8 activePreviewRange:(struct _NSRange)arg9 contentType:(int)arg10 isSingleLine:(_Bool)arg11 lastCharacterLevelPosition:(long long)arg12;	// IMP=0x0000000000072010
- (id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange)arg4 charRectsInReferenceSubstring:(struct CGRect *)arg5 strokeCoveredTextRange:(struct _NSRange)arg6 selectedTextRange:(struct _NSRange)arg7 isCursorStrong:(_Bool)arg8 activePreviewRange:(struct _NSRange)arg9 contentType:(int)arg10 autoCapitalizationMode:(int)arg11 autoCorrectionMode:(int)arg12 isSingleLine:(_Bool)arg13 lastCharacterLevelPosition:(long long)arg14;	// IMP=0x0000000000071f80
- (id)_initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(struct _NSRange)arg4 charRectsInReferenceSubstring:(struct CGRect *)arg5 strokeCoveredTextRange:(struct _NSRange)arg6 selectedTextRange:(struct _NSRange)arg7 isCursorStrong:(_Bool)arg8 activePreviewRange:(struct _NSRange)arg9 contentType:(int)arg10 autoCapitalizationMode:(int)arg11 autoCorrectionMode:(int)arg12 isSingleLine:(_Bool)arg13 lastCharacterLevelPosition:(long long)arg14 protectedCharacterIndexes:(id)arg15;	// IMP=0x0000000000071770

@end

