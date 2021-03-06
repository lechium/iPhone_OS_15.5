//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextAttachment.h>

@class NSAttributedString, NSDictionary, NSString;

@interface WFValueTextAttachment : NSTextAttachment
{
    _Bool _selected;	// 8 = 0x8
    _Bool _requiresRedraw;	// 9 = 0x9
    NSAttributedString *_displayString;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    double _cornerRadius;	// 40 = 0x28
}

+ (id)humanReadableStringFromValueTextAttributedString:(id)arg1;	// IMP=0x000000000024451e
- (void).cxx_destruct;	// IMP=0x00000000002444dc
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool requiresRedraw; // @synthesize requiresRedraw=_requiresRedraw;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) NSString *valueName;
@property(retain, nonatomic) id value;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x0000000000244350
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x0000000000243f83
@property(readonly, nonatomic) NSAttributedString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) struct UIEdgeInsets borderInsets;
@property(readonly, nonatomic) struct UIEdgeInsets textInsets;
- (id)initWithData:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000000243bb6

@end

