//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject
{
    int _bodyFormat;	// 8 = 0x8
    int _maxSize;	// 12 = 0xc
    NSString *_longID;	// 16 = 0x10
    NSString *_folderID;	// 24 = 0x18
    NSString *_serverID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000012a43
@property(nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSString *longID; // @synthesize longID=_longID;
- (id)description;	// IMP=0x00000000000128f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001276f
- (unsigned long long)hash;	// IMP=0x00000000000126bc
- (id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5;	// IMP=0x0000000000012587
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;	// IMP=0x00000000000124cc

@end
