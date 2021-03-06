//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;

@interface _TVInfoListInfo : NSObject
{
    NSString *_group;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _lineSpacing;	// 24 = 0x18
    UIView *_headerContentView;	// 32 = 0x20
    NSArray *_dataViews;	// 40 = 0x28
    struct UIEdgeInsets _headerMargin;	// 48 = 0x30
    struct UIEdgeInsets _headerPadding;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000022221
@property(copy, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(nonatomic) struct UIEdgeInsets headerPadding; // @synthesize headerPadding=_headerPadding;
@property(nonatomic) struct UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;

@end

