//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ObjCObjectClassEntry : NSObject
{
    NSString *_clsName;	// 8 = 0x8
    NSMutableSet *_objects;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003901a0
- (void)addObject:(id)arg1;	// IMP=0x000000000039018a
@property(readonly) NSSet *objects;
@property(readonly) NSString *clsName;
- (id)initWithClass:(Class)arg1;	// IMP=0x00000000003900fe

@end

