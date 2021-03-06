//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

@interface GKActivity : NSObject
{
    unsigned int _mode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSObject<OS_os_activity> *_parent;	// 24 = 0x18
    NSObject<OS_os_activity> *_activity;	// 32 = 0x20
}

+ (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x00000000000148bf
+ (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x000000000001480f
+ (id)named:(id)arg1;	// IMP=0x0000000000014327
+ (id)currentOrNew;	// IMP=0x00000000000142c9
+ (id)detached;	// IMP=0x000000000001426b
+ (id)activity;	// IMP=0x00000000000140bd
- (void).cxx_destruct;	// IMP=0x0000000000014a48
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_os_activity> *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014935
- (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014797
- (id)named:(id)arg1;	// IMP=0x0000000000014777
- (id)child;	// IMP=0x00000000000146fc
- (void)createActivity;	// IMP=0x0000000000014381
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;	// IMP=0x0000000000014008

@end

