//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject
{
    unsigned int _uidValidity;	// 8 = 0x8
    NSDictionary *_sourceUIDsToDestinationUIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001df80
@property(retain, nonatomic) NSDictionary *sourceUIDsToDestinationUIDs; // @synthesize sourceUIDsToDestinationUIDs=_sourceUIDsToDestinationUIDs;
@property(nonatomic) unsigned int uidValidity; // @synthesize uidValidity=_uidValidity;

@end
