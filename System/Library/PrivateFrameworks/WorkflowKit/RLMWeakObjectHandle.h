//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying>
{
    struct BasicRow<realm::Table> _row;	// 8 = 0x8
    void *_info;	// 40 = 0x28
    Class _objectClass;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000000050d99
- (void).cxx_destruct;	// IMP=0x0000000000050d76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050d34
@property(readonly, nonatomic) RLMObjectBase *object;
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000050c20

@end

