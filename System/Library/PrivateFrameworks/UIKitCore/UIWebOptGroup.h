//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebOptGroup : NSObject
{
    id <UIWebSelectedItemPrivate> _group;	// 8 = 0x8
    NSArray *_options;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) id <UIWebSelectedItemPrivate> group; // @synthesize group=_group;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
- (void)dealloc;	// IMP=0x000000000070d8fb
- (id)initWithGroup:(id)arg1 itemOffset:(long long)arg2;	// IMP=0x000000000070d89a

@end
