//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bf7d7
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
@property(readonly, nonatomic) NSURL *url;
- (void)handleError:(id)arg1;	// IMP=0x00000000000bf71d
- (void)handleData:(id)arg1;	// IMP=0x00000000000bf717

@end

