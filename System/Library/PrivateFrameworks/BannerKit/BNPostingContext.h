//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;
@protocol BNPresentable;

@interface BNPostingContext : NSObject
{
    id <BNPresentable> _presentable;	// 8 = 0x8
    unsigned long long _presentationOptions;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c56e
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(readonly, nonatomic) id <BNPresentable> presentable; // @synthesize presentable=_presentable;
@property(readonly, copy, nonatomic) NSUUID *pendingIdentifier;
- (id)initWithPresentable:(id)arg1 presentationOptions:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000000c3d5

@end
