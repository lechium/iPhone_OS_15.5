//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;
@protocol NSItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject
{
    _Bool _header;	// 8 = 0x8
    int _analyticsTarget;	// 12 = 0xc
    UIView *_view;	// 16 = 0x10
    id <NSItemProviderWriting> _draggableContent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b01da
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(nonatomic, getter=isHeader) _Bool header; // @synthesize header=_header;
@property(retain, nonatomic) id <NSItemProviderWriting> draggableContent; // @synthesize draggableContent=_draggableContent;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;

@end
