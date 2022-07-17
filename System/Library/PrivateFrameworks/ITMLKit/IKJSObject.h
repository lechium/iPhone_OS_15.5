//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject
{
    IKAppContext *_appContext;	// 8 = 0x8
    NSMutableDictionary *_managedProperties;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0000000000079078
- (void).cxx_destruct;	// IMP=0x0000000000079665
@property(retain, nonatomic) NSMutableDictionary *managedProperties; // @synthesize managedProperties=_managedProperties;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000000079459
- (id)jsValueForProperty:(id)arg1;	// IMP=0x00000000000793b7
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000790f0
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000007908c
- (id)init;	// IMP=0x000000000007907e

@end
