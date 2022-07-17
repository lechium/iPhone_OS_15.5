//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEvent, NSMutableArray, NSString, UIColor, UIFont, UIImage;

@interface LargeMonthViewOccurrence : NSObject
{
    UIColor *_color;	// 8 = 0x8
    EKEvent *_occurrence;	// 16 = 0x10
    struct CGRect _frame;	// 24 = 0x18
    unsigned int _isAllDay:1;	// 56 = 0x38
    unsigned int _isBirthday:1;	// 56 = 0x38
    unsigned long long _cachedEndRange;	// 64 = 0x40
    unsigned int _selected:1;	// 72 = 0x48
    unsigned int _drawsBackground:1;	// 72 = 0x48
    unsigned int _drawsTimeString:1;	// 72 = 0x48
    int _invitationType;	// 76 = 0x4c
    NSMutableArray *_subOccurrences;	// 80 = 0x50
    _Bool _drawsEmpty;	// 88 = 0x58
    _Bool _splitLeftEdge;	// 89 = 0x59
    _Bool _splitRightEdge;	// 90 = 0x5a
    _Bool _isZoomedDay;	// 91 = 0x5b
    _Bool _isProposedTime;	// 92 = 0x5c
    _Bool _hidden;	// 93 = 0x5d
    double _firstWidth;	// 96 = 0x60
    LargeMonthViewOccurrence *_parent;	// 104 = 0x68
    UIFont *_font;	// 112 = 0x70
    UIImage *_dotImage;	// 120 = 0x78
    NSString *_occurrenceString;	// 128 = 0x80
    NSString *_timeString;	// 136 = 0x88
    NSString *_endTimeString;	// 144 = 0x90
    struct _NSRange _dayRange;	// 152 = 0x98
}

+ (id)_blendColor:(id)arg1 withColor:(id)arg2 alpha:(double)arg3;	// IMP=0x0040000000135a54
+ (id)zoomedDayHourFont;	// IMP=0x0010000000134e61
+ (id)hourFont;	// IMP=0x0010000000134dec
+ (id)zoomedDayTextFont;	// IMP=0x0010000000134d4a
+ (id)textFont;	// IMP=0x0010000000134ca8
+ (void)clearCachedFonts;	// IMP=0x0010000000134c50
- (void).cxx_destruct;	// IMP=0x0020000000137d96
@property(retain, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSString *occurrenceString; // @synthesize occurrenceString=_occurrenceString;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property __weak LargeMonthViewOccurrence *parent; // @synthesize parent=_parent;
@property(nonatomic) _Bool isProposedTime; // @synthesize isProposedTime=_isProposedTime;
@property(nonatomic) _Bool isZoomedDay; // @synthesize isZoomedDay=_isZoomedDay;
@property(nonatomic) struct _NSRange dayRange; // @synthesize dayRange=_dayRange;
@property(nonatomic) double firstWidth; // @synthesize firstWidth=_firstWidth;
@property(nonatomic) _Bool splitRightEdge; // @synthesize splitRightEdge=_splitRightEdge;
@property(nonatomic) _Bool splitLeftEdge; // @synthesize splitLeftEdge=_splitLeftEdge;
@property(nonatomic) _Bool drawsEmpty; // @synthesize drawsEmpty=_drawsEmpty;
- (_Bool)isDeclined;	// IMP=0x0010000000137c2b
- (_Bool)needsReply;	// IMP=0x0010000000137c1e
- (_Bool)isTentative;	// IMP=0x0010000000137c11
- (id)subOccurrences;	// IMP=0x0010000000137c03
- (struct CGRect)isPointInView:(struct CGPoint)arg1;	// IMP=0x00100000001379cd
- (struct CGRect)intersectingRect:(struct CGRect)arg1;	// IMP=0x00100000001377a1
- (void)resetSegments;	// IMP=0x0010000000137787
- (void)addSegmentWithFrame:(struct CGRect)arg1 splitLeftEdge:(_Bool)arg2 splitRightEdge:(_Bool)arg3;	// IMP=0x001000000013763c
- (double)startTime;	// IMP=0x00100000001375c9
- (unsigned long long)gapBetweenBlock:(id)arg1;	// IMP=0x0010000000137514
- (unsigned long long)endRange;	// IMP=0x001000000013750a
- (unsigned long long)startRange;	// IMP=0x00100000001374fd
- (unsigned long long)length;	// IMP=0x00100000001374f0
- (id)lengthForSorting;	// IMP=0x00100000001374cd
- (void)setSplitLeftEdge:(_Bool)arg1 splitRightEdge:(_Bool)arg2;	// IMP=0x00100000001374ae
- (void)updateView;	// IMP=0x001000000013749c
- (id)occurrence;	// IMP=0x001000000013748e
- (void)setOccurrence:(id)arg1;	// IMP=0x0010000000137433
- (struct CGRect)frame;	// IMP=0x00100000001373b9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000001373a3
- (void)_setColor:(id)arg1;	// IMP=0x00100000001372c7
- (_Bool)selected;	// IMP=0x0010000000137260
- (void)setSelected:(_Bool)arg1;	// IMP=0x0010000000137250
- (void)_updateTimeStrings;	// IMP=0x0010000000137075
- (void)_updateDotImage;	// IMP=0x0010000000136e8a
- (void)_updateOccurrenceBackgroundParameters;	// IMP=0x0010000000136df6
- (void)_updateOccurrence;	// IMP=0x0010000000136b0e
- (void)_drawInFrame:(struct CGRect)arg1 traitCollection:(id)arg2;	// IMP=0x00100000001363d3
- (void)drawInFrame:(struct CGRect)arg1 context:(struct CGContext *)arg2 traitCollection:(id)arg3;	// IMP=0x00100000001363be
@property(nonatomic) _Bool drawsTimeString;
- (_Bool)_drawsBackground;	// IMP=0x0010000000136347
- (double)widthDrawingTime:(id)arg1 textRect:(struct CGRect)arg2 color:(id)arg3;	// IMP=0x00100000001360b3
- (id)_timeString:(id)arg1;	// IMP=0x0010000000135f36
- (struct UIEdgeInsets)_textInsets;	// IMP=0x0010000000135e98
- (struct CGPoint)_pointForDotInFrame:(struct CGRect)arg1 withDot:(id)arg2;	// IMP=0x0010000000135da0
- (struct UIEdgeInsets)backgroundInsets;	// IMP=0x0010000000135d24
- (_Bool)isSingleDay;	// IMP=0x0010000000135d13
- (_Bool)isAllDay;	// IMP=0x0010000000135d08
- (void)_drawBackgroundInFrame:(struct CGRect)arg1;	// IMP=0x0010000000135b95
- (id)_backgroundImage;	// IMP=0x001000000013547d
- (id)description;	// IMP=0x0010000000135317
- (id)initWithOccurrence:(id)arg1 forDayRange:(struct _NSRange)arg2;	// IMP=0x00100000001352f2
- (id)initWithOccurrence:(id)arg1 forDayRange:(struct _NSRange)arg2 isZoomedDay:(_Bool)arg3 isProposedTime:(_Bool)arg4;	// IMP=0x0010000000135209
- (id)_strikeColor;	// IMP=0x0010000000135162
- (id)_timeColor;	// IMP=0x0010000000135037
- (id)_titleColor;	// IMP=0x0010000000134f03

@end
