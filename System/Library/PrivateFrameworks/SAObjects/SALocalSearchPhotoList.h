//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SALocalSearchPhotoList <SAAceSerializable>
{
}

+ (id)photoListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000029546
+ (id)photoList;	// IMP=0x0000000000029534
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSArray *photos;
- (id)encodedClassName;	// IMP=0x0000000000029527
- (id)groupIdentifier;	// IMP=0x0000000000029513

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
