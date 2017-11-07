//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTAXClient.h"
#import "XCTElementSnapshotAttributeDataSource.h"
#import "XCTElementSnapshotProvider.h"

@class NSMutableDictionary, NSString;

@interface XCAXClient_iOS : NSObject <XCTAXClient, XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource>
{
    NSMutableDictionary *_userTestingNotificationHandlers;
    NSMutableDictionary *_cacheAccessibilityLoadedValuesForPIDs;
    unsigned long long _alertNotificationCounter;
}

+ (id)sharedClient;
@property unsigned long long alertNotificationCounter; // @synthesize alertNotificationCounter=_alertNotificationCounter;
@property(retain) NSMutableDictionary *cacheAccessibilityLoadedValuesForPIDs; // @synthesize cacheAccessibilityLoadedValuesForPIDs=_cacheAccessibilityLoadedValuesForPIDs;
@property(retain) NSMutableDictionary *userTestingNotificationHandlers; // @synthesize userTestingNotificationHandlers=_userTestingNotificationHandlers;
@property double AXTimeout;
- (_Bool)_setAXTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)performAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (id)parameterizedAttributeForElement:(id)arg1 attribute:(id)arg2 parameter:(id)arg3;
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 outError:(id *)arg4;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2;
- (id)attributesForElementSnapshot:(id)arg1 attributeList:(id)arg2;
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)defaultParameters;
- (void)notifyWhenViewControllerViewDidDisappearReply:(CDUnknownBlockType)arg1;
- (void)notifyWhenViewControllerViewDidAppearReply:(CDUnknownBlockType)arg1;
- (void)notifyWhenNoAnimationsAreActiveForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenEventLoopIsIdleForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)interruptingUIElementAffectingSnapshot:(id)arg1;
- (void)handleAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleUserTestingNotification:(id)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1 error:(id *)arg2;
- (_Bool)cachedAccessibilityLoadedValueForPID:(int)arg1;
- (id)activeApplications;
- (id)systemApplication;
- (_Bool)enableFauxCollectionViewCells:(id *)arg1;
- (_Bool)loadAccessibility:(id *)arg1;
- (_Bool)_registerForAXNotification:(int)arg1 error:(id *)arg2;
- (_Bool)_loadAccessibility:(id *)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

