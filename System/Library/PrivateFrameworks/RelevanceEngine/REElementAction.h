//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@protocol REElementActionDelegate;

@interface REElementAction : NSObject <NSCopying, NSCoding>
{
    id <REElementActionDelegate> _delegate;	// 8 = 0x8
    _Bool _forceExecution;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f8ac5
@property(nonatomic) _Bool forceExecution; // @synthesize forceExecution=_forceExecution;
- (void)_didFinish:(_Bool)arg1;	// IMP=0x00000000000f8a27
- (void)_performWithContext:(id)arg1;	// IMP=0x00000000000f8a21
@property(nonatomic) __weak id <REElementActionDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f89f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f89c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f89b3

@end
