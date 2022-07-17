//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase, NSString, TRISQLiteCKDatabase;

@interface TRISQLiteCKContainer : NSObject
{
    TRISQLiteCKDatabase *_database;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000147e1
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) CKDatabase *sharedCloudDatabase;
@property(readonly, nonatomic) CKDatabase *publicCloudDatabase;
@property(readonly, nonatomic) CKDatabase *privateCloudDatabase;
- (id)initWithContainerIdentifier:(id)arg1 database:(id)arg2;	// IMP=0x0000000000014714

@end
