//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AutoFetchCreateJobListPrivate : NSObject
{
    NSMutableArray *_jobList;	// 8 = 0x8
    NSArray *_accounts;	// 16 = 0x10
    NSMutableDictionary *_accountResponsiveness;	// 24 = 0x18
    int _fetchType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005932
@property(readonly, nonatomic) NSArray *jobList; // @synthesize jobList=_jobList;
- (void)run;	// IMP=0x0010000000004a77
- (_Bool)isForced;	// IMP=0x0010000000004a6c
- (_Bool)isCompacting;	// IMP=0x0010000000004a5f
- (_Bool)shouldLoadOlderMessages;	// IMP=0x0010000000004a54
- (_Bool)shouldGrowFetchWindow;	// IMP=0x0010000000004a48
- (_Bool)isForegroundRequest;	// IMP=0x0010000000004a3a
- (_Bool)isUserRequested;	// IMP=0x0010000000004a2c
- (id)initForAccounts:(id)arg1 accountResponsiveness:(id)arg2 fetchType:(int)arg3;	// IMP=0x0010000000004914

@end
