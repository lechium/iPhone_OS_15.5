//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SBWorkItem : NSObject
{
    CDUnknownBlockType _workBlock;	// 8 = 0x8
    NSDate *_creationDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000621d5b
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) CDUnknownBlockType work; // @synthesize work=_workBlock;
- (id)initWithWork:(CDUnknownBlockType)arg1;	// IMP=0x0000000000621ca0

@end
