//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WebBookmark;

@interface _SFFolderPickerItem : NSObject
{
    WebBookmark *_bookmark;	// 8 = 0x8
    unsigned long long _depth;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010d153
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) NSString *title;
- (id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2;	// IMP=0x000000000010d0a0

@end
