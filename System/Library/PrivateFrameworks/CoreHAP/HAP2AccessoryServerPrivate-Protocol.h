//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServer-Protocol.h>

@class HAP2SerializedOperationQueue, NSString;
@protocol HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerPrivate;

@protocol HAP2AccessoryServerPrivate <HAP2AccessoryServer>
@property(retain, nonatomic) NSString *productData;
@property(readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property(readonly, nonatomic) id <HAP2AccessoryServerControllerPrivate> controller;
@property(readonly, nonatomic) __weak id <HAP2AccessoryServerBrowserPrivate> browser;
@end
