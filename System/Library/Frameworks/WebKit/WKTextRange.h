//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextRange.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WKTextRange : UITextRange
{
    struct CGRect _startRect;	// 8 = 0x8
    struct CGRect _endRect;	// 40 = 0x28
    _Bool _isNone;	// 72 = 0x48
    _Bool _isRange;	// 73 = 0x49
    _Bool _isEditable;	// 74 = 0x4a
    NSArray *_selectionRects;	// 80 = 0x50
    unsigned long long _selectedTextLength;	// 88 = 0x58
}

+ (id)textRangeWithState:(_Bool)arg1 isRange:(_Bool)arg2 isEditable:(_Bool)arg3 startRect:(struct CGRect)arg4 endRect:(struct CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7;	// IMP=0x0000000000882995
@property(copy, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) unsigned long long selectedTextLength; // @synthesize selectedTextLength=_selectedTextLength;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isRange; // @synthesize isRange=_isRange;
@property(nonatomic) _Bool isNone; // @synthesize isNone=_isNone;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000882c9c
- (_Bool)isEmpty;	// IMP=0x0000000000882c87
- (id)end;	// IMP=0x0000000000882c2a
- (id)start;	// IMP=0x0000000000882bcd
- (id)description;	// IMP=0x0000000000882ae8
- (void)dealloc;	// IMP=0x0000000000882aa6
- (_Bool)_isRanged;	// IMP=0x0000000000882980
- (_Bool)_isCaret;	// IMP=0x000000000088296e

@end
