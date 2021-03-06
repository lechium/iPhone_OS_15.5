//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>

@class NSArray, NSString;

@interface WFContactGroup : NSObject <WFNaming>
{
}

+ (id)contactGroupWithName:(id)arg1;	// IMP=0x0000000000031c6c
+ (id)allContactGroups;	// IMP=0x0000000000031c41
+ (Class)preferredConcreteSubclass;	// IMP=0x0000000000031c30
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)containsContact:(id)arg1;	// IMP=0x0000000000031d06
@property(readonly, nonatomic) NSArray *contacts;
@property(readonly, nonatomic) NSString *name;

@end

