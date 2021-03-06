//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFContentItem;

@interface WFContentItemChangeTransaction : NSObject
{
    NSString *_mode;	// 8 = 0x8
    WFContentItem *_contentItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d3195
@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;	// IMP=0x00000000000d3160
- (id)initWithContentItem:(id)arg1;	// IMP=0x00000000000d3052

@end

